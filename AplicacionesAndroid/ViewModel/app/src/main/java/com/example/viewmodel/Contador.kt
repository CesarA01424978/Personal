package com.example.viewmodel

import android.os.Bundle
import android.widget.Toast
import androidx.activity.enableEdgeToEdge
import androidx.activity.viewModels
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.ViewModelProvider
import com.example.viewmodel.databinding.ActivityContadorBinding

class Contador : AppCompatActivity() {
    private lateinit var binding: ActivityContadorBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        binding = ActivityContadorBinding.inflate(layoutInflater)
        setContentView(binding.root)

        val viewModel = ViewModelProvider(this)[ContadorViewModel::class.java]
        // Lo de arriba pero más facil:
        //val ViewModel: ViewModelProvider(this)[ContadorViewModel::class.java]

        viewModel.seconds.observe(this, { seconds ->
            binding.txtConteo.text = seconds.toString()
        })

        viewModel.isFinished.observe(this, {
            if(it){
                Toast.makeText(this, "ERROR!9: null", Toast.LENGTH_SHORT).show()
            }
        })

        binding.btnDetener.setOnClickListener{
            viewModel.stopTimer()
        }

        binding.btnIniciar.setOnClickListener{
            if (binding.edtNumero.text.isEmpty() || binding.edtNumero.text.length >= 4){
                Toast.makeText(this,
                    "Y el número, bro?", Toast.LENGTH_SHORT).show()
            }else {
                viewModel.startTime.value = binding.edtNumero.text.toString().toInt()
                viewModel.startTimer()
            }

        }
    }
}