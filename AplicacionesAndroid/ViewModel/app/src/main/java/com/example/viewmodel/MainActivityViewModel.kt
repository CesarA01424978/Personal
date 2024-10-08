package com.example.viewmodel

import androidx.lifecycle.ViewModel

class MainActivityViewModel: ViewModel() {
    var num = 0
    fun aumentarNumero(){
        num++
    }

}