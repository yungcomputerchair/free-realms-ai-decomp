// addr: 0x00f9e860
// name: SCEA_BinXML_Streamable_setBorrowedBuffer
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall SCEA_BinXML_Streamable_setBorrowedBuffer(int *param_1,int param_2,int param_3)

{
  int *_Memory;
  code *pcVar1;
  
                    /* Replaces current contents with a non-refcounted borrowed buffer, marks the
                       external-buffer flag, and invokes a virtual post-set hook. It first releases
                       any existing refcounted buffer. */
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
  param_1[3] = param_2;
  param_1[4] = param_3;
  pcVar1 = *(code **)(*param_1 + 0x1c);
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 1;
  (*pcVar1)();
  return param_1;
}

