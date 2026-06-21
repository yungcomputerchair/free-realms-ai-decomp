// addr: 0x0042131b
// name: assign
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(char const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1,
          uint param_2)

{
  bool bVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  
                    /* Preserves the existing identified symbol assign; code initializes or operates
                       on that class and is queued for sidecar write-back. */
  bVar1 = _Inside(this,param_1);
  if (bVar1) {
    if (*(uint *)(this + 0x18) < 0x10) {
      pbVar2 = this + 4;
    }
    else {
      pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 4);
    }
    this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           assign(this,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)this,(int)param_1 - (int)pbVar2,param_2);
  }
  else {
    bVar1 = _Grow(this,param_2,false);
    if (bVar1) {
      if (*(uint *)(this + 0x18) < 0x10) {
        pbVar2 = this + 4;
      }
      else {
        pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 4);
      }
      FUN_00403a6f(pbVar2,*(uint *)(this + 0x18),param_1,param_2);
      _Eos(this,param_2);
    }
  }
  return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
}

