package com.example.serviciosweb

import android.R
import android.os.Bundle
import android.util.Log
import android.widget.ArrayAdapter
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import com.android.volley.Request
import com.android.volley.Response
import com.android.volley.toolbox.JsonArrayRequest
import com.android.volley.toolbox.Volley
import com.example.serviciosweb.databinding.ActivityMainBinding
import org.json.JSONArray

class MainActivity : AppCompatActivity() {
    private lateinit var binding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        var queue = Volley.newRequestQueue(this)

        val url = "https://jsonplaceholder.typicode.com/users"
        val lista = mutableListOf<String>()
        val listener = Response.Listener<JSONArray>{ result ->
            for(i in 0 until result.length())
                lista.add(result.getJSONObject(i).getString("name")
                + "\n" + result.getJSONObject(i).getString("email")
                + "\n" + result.getJSONObject(i).getJSONObject("address")
                                                .getString("street"))
            val adaptador = ArrayAdapter(this, android.R.layout.simple_list_item_1, lista)
            binding.spUser.adapter = adaptador
        }
        val error = Response.ErrorListener { error ->
            Log.e("Error", error.message!!)
        }

        //Método, URL, Body, Listener, Error
        val request = JsonArrayRequest(Request.Method.GET, url, null, listener, error)
        queue.add(request)


    }
}