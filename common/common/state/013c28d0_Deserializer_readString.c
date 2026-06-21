// addr: 0x013c28d0
// name: Deserializer_readString
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Deserializer_readString(void * this, void * out) */

bool __thiscall Deserializer_readString(void *this,void *out)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  void *local_4;
  
                    /* Reads a length-prefixed string from the deserializer buffer, validating read
                       state and maximum length before assigning the output string. */
  if (*(int *)((int)this + 0x10) == 0) {
    *(undefined4 *)((int)this + 0x10) = 1;
  }
  local_4 = this;
  if (*(int *)((int)this + 0x10) != 1) {
    FUN_012f5dc0("Wrong state in readString %d",*(int *)((int)this + 0x10));
  }
  bVar3 = Deserializer_readInteger(this,(int *)&local_4);
  if (!bVar3) {
    return false;
  }
  if (local_4 < (void *)0x1400001) {
    iVar2 = *(int *)((int)this + 0xc);
    iVar1 = iVar2 + 1 + (int)local_4;
    if (iVar1 <= *(int *)((int)this + 4)) {
      *(int *)((int)this + 0xc) = iVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (out,(char *)(*(int *)this + iVar2),(uint)local_4);
      return true;
    }
  }
  else {
    FUN_012f5dc0("Invalid string length: %d",local_4);
  }
  return false;
}

