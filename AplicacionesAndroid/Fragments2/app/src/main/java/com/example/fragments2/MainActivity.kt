package com.example.fragments2

import android.os.Bundle
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import com.example.fragments2.databinding.ActivityMainBinding
import com.example.fragments2.databinding.FragmentBottomBinding
import com.example.fragments2.fragment.BottomFragment
import com.example.fragments2.fragment.TopFragment

class MainActivity : AppCompatActivity() {
    private lateinit var binding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val fragmentManager = supportFragmentManager
        val fragmentTransaction = fragmentManager.beginTransaction()
        //fragmentTransaction.add(R.id.top, TopFragment())      // add. pone fragmento sobre fragmento (dos pantallas en memoria y solo se ve una)
        //fragmentTransaction.replace(R.id.bottom, BottomFragment())
        fragmentTransaction.add(binding.top.id, TopFragment())
        fragmentTransaction.replace(binding.bottom.id, BottomFragment())
        fragmentTransaction.commit()

    }
}