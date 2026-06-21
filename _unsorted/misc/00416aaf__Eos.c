// addr: 0x00416aaf
// name: _Eos
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Library Function - Single Match
    protected: void __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Eos(unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  *(uint *)(this + 0x14) = param_1;
  if (*(uint *)(this + 0x18) < 0x10) {
    pbVar1 = this + 4;
  }
  else {
    pbVar1 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 4);
  }
  pbVar1[param_1] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  return;
}

