package com.example.uploadfile

import android.net.Uri
import android.os.Bundle
import android.widget.Toast
import androidx.activity.enableEdgeToEdge
import androidx.activity.result.contract.ActivityResultContracts
import androidx.appcompat.app.AppCompatActivity
import androidx.core.content.FileProvider
import androidx.core.net.toUri
import com.bumptech.glide.Glide
import com.example.uploadfile.databinding.ActivityMainBinding
import java.io.File
import java.util.UUID

class MainActivity : AppCompatActivity() {
    private lateinit var binding: ActivityMainBinding
    private lateinit var photo: File

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        enableEdgeToEdge()
        setContentView(binding.root)

        binding.btnCamara.setOnClickListener{
            photo = creteBlankTempFile()
            val uri = FileProvider.getUriForFile(
                this,
                "mx.tec.uploadfiles.fileprovider",
                photo
            )
            cameraLauncher.launch(uri)
        }

        binding.btnGaleria.setOnClickListener{
            galleryLauncher.launch("image/*")
        }

        binding.btnMostrar.setOnClickListener{
            Glide.with(this)
                .load("http://172.17.208.1:3000/${binding.editTextNumber.text}")
                .into(binding.img1)
        }

    }

    private val galleryLauncher =
        registerForActivityResult(
            // Para abrir algo audio/video
            ActivityResultContracts.GetContent()){ result ->
            //binding.img1.setImageURI(result) // toma la imagen tal cual la tenemos de tamaño
            Glide.with(this)
                .load(result)
                .into(binding.img1)
        }

    private val cameraLauncher =
        registerForActivityResult(
            // Para abrir algo audio/video
            ActivityResultContracts.TakePicture() // boleano que dice si tomó la foto o no
        ){ result ->
            //se debe crear un archivo blanco, luego se toman bites y luego
            if(result){
                Glide.with(this)
                    .load(photo.toUri())
                    .into(binding.img1)
                uploadToServer(photo.toUri()) // sube en cuanto la tome
            }
        }

    private fun creteBlankTempFile(): File{
        val tempFolder = File(applicationContext.filesDir, "photos") //Crea una carpeta
        //tempFolder.delateRecursively()
        tempFolder.mkdirs()
        val tempPhoto = File(tempFolder, "tempPhoto${UUID.randomUUID()}.jpg") // Crea foto temporal con un id único
        return tempPhoto
    }

    private fun uploadToServer(uri: Uri){
        val url = "http://172.17.208.1:3000"

        val inputStream = contentResolver.openInputStream(uri)
        val bytes = inputStream?.readBytes() ?: byteArrayOf()

        val multipartRequest = MultipartRequest(url,
            bytes, mapOf(),
            { response -> },
            { error -> }
        )
        queue.add(multipartRequest)
        //var fileData =
    }

    private fun uploadMultipartToServer(uri: Uri){

        val params = mapOf(
            "name" to "Nombre",
            "description" to "Descripción",
            "area" to "Área"
        )

        val multipartRequest = MultipartRequest(
            url,
            bytes,
            param,
            { response ->
                // Handle response
                Toast.makeText(this, "Support ticket saved successfully", Toast.LENGTH_SHORT).show()
            },
            { error ->
                // Handle error
                Toast.makeText(this, "Error saving support ticket", Toast.LENGTH_SHORT).show()
            }
        )
    }
}