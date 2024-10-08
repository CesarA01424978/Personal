package com.example.serviciosweb

import android.os.Bundle
import android.util.Log
import android.widget.ArrayAdapter
import android.widget.Toast
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import com.android.volley.Request
import com.android.volley.Response
import com.android.volley.toolbox.JsonArrayRequest
import com.android.volley.toolbox.JsonObjectRequest
import com.android.volley.toolbox.Volley
import com.example.serviciosweb.databinding.ActivityFormularioBinding
import com.example.serviciosweb.databinding.ActivityUsuariosBinding
import org.json.JSONArray
import org.json.JSONObject

class Formulario : AppCompatActivity() {
    private lateinit var binding: ActivityFormularioBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityFormularioBinding.inflate(layoutInflater)
        setContentView(binding.root)

        val queue = Volley.newRequestQueue(this)

        val url = "http://chinguenasumadre.servidoreselruso.com:8080/api/users"
        val listener = Response.Listener<JSONObject> { result ->
            try{
                result.getString("name")
                Toast.makeText( this@Formulario, "Registro insertado correctamente",
                    Toast.LENGTH_SHORT).show()
            }catch(ex: Exception){
                Toast.makeText(this@Formulario, "Error 400",
                    Toast.LENGTH_SHORT).show()
            }
        }

        val error = Response.ErrorListener { error ->
            Log.e("Error", error.message.toString())
        }

        binding.btnRegistrar.setOnClickListener{
            val body = JSONObject()
            body.put("name", binding.edtNombre.text.toString())
            body.put("apellido", binding.edtApellido.text.toString())
            body.put("email", binding.edtEmail.text.toString())
            body.put("edad", binding.edtEdad.text.toString())
            val request = JsonObjectRequest(Request.Method.POST, url, body, listener, error)
            queue.add(request)
        }
    }
}