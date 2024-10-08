package com.example.uploadfile

import com.android.volley.NetworkResponse
import com.android.volley.ParseError
import com.android.volley.Request
import com.android.volley.Response
import com.android.volley.toolbox.HttpHeaderParser
import java.io.ByteArrayOutputStream
import java.io.DataOutputStream
import java.io.IOException
import java.nio.charset.Charset

class MultipartRequest(
    url: String,
    private val filePart: ByteArray,
    private val params: Map<String, String>,
    private val listener: Response.Listener<NetworkResponse>,
    private val errorListener: Response.ErrorListener
) : Request<NetworkResponse>(Method.POST, url, errorListener) {

    private val boundary = "apiclient-" + System.currentTimeMillis()
    private val mimeType = "multipart/form-data;boundary=$boundary"

    override fun getBodyContentType(): String {
        return mimeType
    }

    override fun getBody(): ByteArray {
        val bos = ByteArrayOutputStream()
        val dos = DataOutputStream(bos)

        try {
            // Add file part
            buildFilePart(dos, filePart)
            for((key, value) in params) {
                buildTextPart(dos, key, value)
            }
            dos.writeBytes("--$boundary--\r\n")
            do.write(value.toByteArray(Charsets.UTF_8))
        } catch (e: IOException) {
            e.printStackTrace()
        }

        return bos.toByteArray()
    }

    private fun buildFilePart(dos: DataOutputStream, fileData: ByteArray) {
        try {
            dos.writeBytes("--$boundary\r\n")
            dos.writeBytes("Content-Disposition: form-data; name=\"file\"; filename=\"image.jpg\"\r\n")
            dos.writeBytes("Content-Type: image/jpeg\r\n\r\n")
            dos.write(fileData)
            dos.writeBytes("\r\n")
        } catch (e: IOException) {
            e.printStackTrace()
        }
    }

    override fun parseNetworkResponse(response: NetworkResponse): Response<NetworkResponse> {
        return try {
            Response.success(response, HttpHeaderParser.parseCacheHeaders(response))
        } catch (e: Exception) {
            Response.error(ParseError(e))
        }
    }

    override fun deliverResponse(response: NetworkResponse) {
        listener.onResponse(response)
    }
}
