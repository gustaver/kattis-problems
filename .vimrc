syntax on
filetype plugin indent on
set encoding=utf-8
set number
set nocompatible              " be iMproved, required
filetype off                  " required

let mapleader = "\<Space>"

set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

Plugin 'VundleVim/Vundle.vim'
Plugin 'scrooloose/nerdtree'                                                      
Plugin 'Valloric/YouCompleteMe' 
Plugin 'flazz/vim-colorschemes'
Plugin 'tpope/vim-fugitive'
Plugin 'tpope/vim-surround'
Plugin 'bling/vim-airline'
Plugin 'godlygeek/tabular'

call vundle#end()            " required
filetype plugin indent on    "  

let g:ycm_autoclose_preview_window_after_insertion = 1                            
let g:ycm_autoclose_preview_window_after_completion = 1                            
let g:ycm_global_ycm_extra_conf = '~/.vim/.ycm_extra_comf.py'  

set completeopt-=preview
set makeprg=g++\ -std=c++11\ %\ -o\ %<\ &&\ ./%<

colorscheme onedark

autocmd StdinReadPre * let s:std_in=1                                              
autocmd VimEnter * if argc() == 0 && !exists("s:std_in") | NERDTree | endif
