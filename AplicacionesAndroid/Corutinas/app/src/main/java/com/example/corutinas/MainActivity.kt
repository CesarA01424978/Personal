package com.example.corutinas

import android.os.Bundle
import android.widget.Toast
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import androidx.lifecycle.ReportFragment.Companion.reportFragment
import com.example.corutinas.databinding.ActivityMainBinding
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import kotlinx.coroutines.withContext
import kotlin.jvm.Throws

class MainActivity : AppCompatActivity() {
    private lateinit var binding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        enableEdgeToEdge()
        setContentView(binding.root)
        binding.btnIniciar.setOnClickListener{
            //scope.builder { dispatcher }
            GlobalScope.launch{
                val login = checkUser(
                    binding.edtUsuario.text.toString(),
                    binding.edtUsuario.text.toString()
                )
                // Al hilo donde lo va a mandar
                withContext(Dispatchers.Main){
                    Toast.makeText(this@MainActivity, if(login) "Existe" else "No existe", Toast.LENGTH_SHORT).show()
                }
            }
            /*val login = checkUser(binding.edtUsuario.text.toString(),
                binding.edtContraseA.text.toString())
            Toast.makeText(this, if(login) "Existe" else "No existe", Toast.LENGTH_SHORT).show()*/
        }


    }

    // Simular el llamado a algo exterior
    private fun checkUser(usuario: String, password: String): Boolean{
        Thread.sleep(1000)
        return usuario.isNotEmpty() && password.isNotEmpty()
    }



}