// addr: 0x00f9e750
// name: SCEA_BinXML_Streamable_assign
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall SCEA_BinXML_Streamable_assign(int *param_1,int *param_2)

{
  int *_Memory;
  
                    /* Implements Streamable assignment: self-check, release current storage, reset
                       fields, then copy from the source. It reuses the copyFrom helper and
                       refcount-release pattern. */
  if (param_1 != param_2) {
    (**(code **)(*param_1 + 0x14))();
    _Memory = (int *)param_1[2];
    if (_Memory != (int *)0x0) {
      *_Memory = *_Memory + -1;
      if (*_Memory == 0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      param_1[2] = 0;
    }
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    SCEA_BinXML_Streamable_copyFrom(param_1,param_2);
  }
  return param_1;
}

