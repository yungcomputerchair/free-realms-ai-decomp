// addr: 0x00f9ea30
// name: SCEA_BinXML_String_assignCString
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall SCEA_BinXML_String_assignCString(void *param_1,char *param_2,size_t param_3)

{
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
                    /* Assigns a C string into a BinXML String, computing length when requested,
                       copying to an owned NUL-terminated buffer, or using the shared empty buffer
                       for empty strings. Passing null clears the Streamable state. */
  if (((*(int *)((int)param_1 + 8) == 0) || (*(char **)((int)param_1 + 0xc) == (char *)0x0)) ||
     (*(char **)((int)param_1 + 0xc) != param_2)) {
    if (param_2 != (char *)0x0) {
      if (param_3 == 0xffffffff) {
        pcVar2 = param_2;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        param_3 = (int)pcVar2 - (int)(param_2 + 1);
      }
      if (param_3 != 0) {
        _Dst = Mem_Alloc(param_3 + 1);
        _memmove(_Dst,param_2,param_3);
        *(undefined1 *)((int)_Dst + param_3) = 0;
        SCEA_BinXML_Streamable_setOwnedBuffer(_Dst,param_3 + 1);
        return param_1;
      }
      SCEA_BinXML_Streamable_setBorrowedBuffer(&DAT_0175b400,0);
      return param_1;
    }
    SCEA_BinXML_Streamable_clear(param_1);
  }
  return param_1;
}

