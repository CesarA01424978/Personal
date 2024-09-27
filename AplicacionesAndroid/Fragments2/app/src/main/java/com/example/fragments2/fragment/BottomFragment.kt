package com.example.fragments2.fragment

import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import com.example.fragments2.R
import com.example.fragments2.databinding.FragmentBottomBinding

class BottomFragment : Fragment() {
    private lateinit var binding: FragmentBottomBinding
    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        binding = FragmentBottomBinding
            .inflate(inflater,container,false)
        binding.textView3.text = "Soy el bottom"
        // Inflate the layout for this fragment
        return binding.root
    }

}