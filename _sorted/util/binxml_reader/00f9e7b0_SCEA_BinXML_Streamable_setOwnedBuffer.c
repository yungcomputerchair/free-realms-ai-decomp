// addr: 0x00f9e7b0
// name: SCEA_BinXML_Streamable_setOwnedBuffer
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall SCEA_BinXML_Streamable_setOwnedBuffer(int *param_1,int param_2,int param_3)

{
  int *_Memory;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Replaces the Streamable contents with an owned/refcounted buffer, allocating
                       a refcount word when data is non-null and invoking a virtual post-set hook.
                       Existing storage is released first. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0162ac4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(*param_1 + 0x14))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  _Memory = (int *)param_1[2];
  if (_Memory != (int *)0x0) {
    *_Memory = *_Memory + -1;
    if (*_Memory == 0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    param_1[2] = 0;
  }
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  if (param_2 != 0) {
    puVar1 = Mem_Alloc(4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 1;
    }
    uStack_4 = 0xffffffff;
    param_1[2] = (int)puVar1;
  }
  (**(code **)(*param_1 + 0x18))();
  ExceptionList = local_c;
  return param_1;
}

