package com.example.divisas

import android.content.Intent
import android.os.Bundle
import android.preference.EditTextPreference
import android.widget.ArrayAdapter
import android.widget.EditText
import android.widget.TextView
import android.widget.Toast
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import com.example.divisas.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    private lateinit var binding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        val listaDivisas = listOf("MXN", "USD", "EUR", "JYP", "CAD")
        //Contexto, layout, datos
        val adapter = ArrayAdapter(this@MainActivity,
            android.R.layout.simple_list_item_1,
            listaDivisas)
        binding.spDivisas1.adapter = adapter //Para poder usar los spinners
        binding.spDivisas2.adapter = adapter //Para poder usar los spinners


        binding.btnConvertir.setOnClickListener{
            val spin1 = binding.spDivisas1.selectedItem.toString()
            val spin2 = binding.spDivisas2.selectedItem.toString()
            val editTextNumber: EditText = findViewById(R.id.editTextNumber)
            val numIngresado = editTextNumber.text.toString().toFloatOrNull() ?: 0 //Obtener el texto del EditText y pasarlo a núm

            if (spin1 == spin2){
                Toast.makeText(this, "Mismas divisas", Toast.LENGTH_SHORT).show() //Para ver si saca el valor del spinner
            }else{
                when (spin1) {
                    "MXN" -> {
                        when (spin2) {
                            "USD" -> {
                                binding.textView2.setText((numIngresado.toFloat()*0.050).toString())
                            }
                            "EUR" -> {
                                binding.textView2.setText((numIngresado.toFloat()*0.046).toString())
                            }
                            "JYP"  -> {
                                binding.textView2.setText((numIngresado.toFloat()*7.34).toString())
                            }
                            "CAD"  -> {
                                binding.textView2.setText((numIngresado.toFloat()*0.068).toString())
                            }
                        }
                    }
                    "USD" -> {
                        when (spin2) {
                            "MXN" -> {
                                binding.textView2.setText((numIngresado.toFloat()/0.050).toString())
                            }
                            "EUR" -> {
                                binding.textView2.setText((numIngresado.toFloat()*0.90).toString())
                            }
                            "JYP"  -> {
                                binding.textView2.setText((numIngresado.toFloat()*145.24).toString())
                            }
                            "CAD"  -> {
                                binding.textView2.setText((numIngresado.toFloat()*1.35).toString())
                            }
                        }
                    }
                    "EUR" -> {
                        when (spin2) {
                            "MXN" -> {
                                binding.textView2.setText((numIngresado.toFloat()/0.046).toString())
                            }
                            "USD" -> {
                                binding.textView2.setText((numIngresado.toFloat()/0.90).toString())
                            }
                            "JYP"  -> {
                                binding.textView2.setText((numIngresado.toFloat()*160.55).toString())
                            }
                            "CAD"  -> {
                                binding.textView2.setText((numIngresado.toFloat()*1.5).toString())
                            }
                        }
                    }
                    "JYP"  -> {
                        when (spin2) {
                            "MXN" -> {
                                binding.textView2.setText((numIngresado.toFloat()/7.34).toString())
                            }
                            "USD" -> {
                                binding.textView2.setText((numIngresado.toFloat()/145.24).toString())
                            }
                            "EUR"  -> {
                                binding.textView2.setText((numIngresado.toFloat()/160.55).toString())
                            }
                            "CAD"  -> {
                                binding.textView2.setText((numIngresado.toFloat()*0.0093).toString())
                            }
                        }
                    }
                    "CAD"  -> {
                        when (spin2) {
                            "MXN" -> {
                                binding.textView2.setText((numIngresado.toFloat()/0.068).toString())
                            }
                            "USD" -> {
                                binding.textView2.setText((numIngresado.toFloat()/1.35).toString())
                            }
                            "EUR"  -> {
                                binding.textView2.setText((numIngresado.toFloat()/1.5).toString())
                            }
                            "JYP"  -> {
                                binding.textView2.setText((numIngresado.toFloat()/0.0093).toString())
                            }
                        }
                    }
                }
                //binding.textView2.setText("Lol que aml")
            }
        }
    }



}