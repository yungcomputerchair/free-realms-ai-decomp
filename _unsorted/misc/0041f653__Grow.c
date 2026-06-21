// addr: 0x0041f653
// name: _Grow
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Library Function - Single Match
    protected: bool __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Grow(unsigned int,bool)
   
   Library: Visual Studio 2005 Release */

bool __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,
          bool param_2)

{
  uint uVar1;
  
  if (param_1 == 0xffffffff) {
    FUN_00d81ddb();
  }
  if (*(uint *)(this + 0x18) < param_1) {
    FUN_0041c08c(param_1,*(undefined4 *)(this + 0x14));
  }
  else if ((param_2) && (param_1 < 0x10)) {
    uVar1 = *(uint *)(this + 0x14);
    if (param_1 < *(uint *)(this + 0x14)) {
      uVar1 = param_1;
    }
    FUN_0041ba81(1,uVar1);
  }
  else if (param_1 == 0) {
    _Eos(this,0);
  }
  return param_1 != 0;
}

