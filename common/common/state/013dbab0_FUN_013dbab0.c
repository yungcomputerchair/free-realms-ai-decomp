// addr: 0x013dbab0
// name: FUN_013dbab0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * two_string_pair_ctor(void * this, char ** strings) */

void * __thiscall two_string_pair_ctor(void *this,char **strings)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs two std::string fields from two input C strings. No class/domain
                       evidence is available. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168c593;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = *strings;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 4) = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0;
  pcVar2 = strings[1];
  *(undefined4 *)((int)this + 0x34) = 0xf;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  ExceptionList = local_c;
  return this;
}

