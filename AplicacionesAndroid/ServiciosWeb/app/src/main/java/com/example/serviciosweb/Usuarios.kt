package com.example.serviciosweb

import android.content.Intent
import android.os.Bundle
import android.util.Log
import android.view.Menu
import android.view.MenuItem
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
import com.example.serviciosweb.databinding.ActivityUsuariosBinding
import org.json.JSONArray

class Usuarios : AppCompatActivity() {
    private lateinit var binding: ActivityUsuariosBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityUsuariosBinding.inflate(layoutInflater)
        setContentView(binding.root)

        var queue = Volley.newRequestQueue(this)
        //Para llenar una lista es igual que un spin
        var datos = mutableListOf("Juan", "Iker", "Yoni")

        val url = "http://chinguenasumadre.servidoreselruso.com:8080/api/users"
        val listener = Response.Listener<JSONArray>{ result ->
            for(i in 0 until result.length()){
                datos.add(result.getJSONObject(i).getString("name"))
            }
            val adaptador = ArrayAdapter(this@Usuarios,
                android.R.layout.simple_list_item_1, datos)

            binding.lvLista.adapter = adaptador
        }

        val error = Response.ErrorListener { error ->
            Log.e("Error", error.message.toString())
        }

        //Método, URL, Body, Listener, Error
        val request = JsonArrayRequest(Request.Method.GET, url, null, listener, error)
        queue.add(request)

    }

    //pegue el menu al act
    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        menuInflater.inflate(R.menu.menu_usuarios, menu)
        return true
    }

    //Configure las acciones de las opciones
    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        when(item.itemId){
            R.id.mnuRegistrar -> {
                // Abrir la otra pantalla
                val intent = Intent(this@Usuarios, Formulario::class.java)
                startActivity(intent)
            }
            R.id.mnuSalir -> finish() // cerrar el activity
        }
        return true
    }
}