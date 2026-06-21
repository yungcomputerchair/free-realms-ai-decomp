// addr: 0x009930f0
// name: Loggable_sub_009930f0
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Loggable_sub_009930f0(int param_1,uint param_2)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a Loggable sub_009930f0 routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159bcd3;
  local_c = ExceptionList;
  _Memory = *(void **)(param_1 + 0x10 + (param_2 % 0x23) * 4);
  if (_Memory == (void *)0x0) {
    return;
  }
  do {
    if (*(uint *)((int)_Memory + 0x28) == param_2) {
      ExceptionList = &local_c;
      FUN_008bec60(_Memory);
      local_4 = 0xffffffff;
      *(undefined ***)((int)_Memory + 4) = Loggable::vftable;
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    _Memory = *(void **)((int)_Memory + 0x24);
  } while (_Memory != (void *)0x0);
  return;
}

