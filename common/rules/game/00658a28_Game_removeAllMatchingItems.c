// addr: 0x00658a28
// name: Game_removeAllMatchingItems
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_removeAllMatchingItems(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  void *unaff_retaddr;
  
                    /* Checks a virtual predicate for the supplied item, repeatedly pops/removes
                       elements while a vector has entries, then invokes a final virtual handler.
                       Evidence: vtable calls around StdVector_size; no strings so exact item type
                       is unclear. */
  cVar1 = (**(code **)(*param_1 + 0x2d0))(param_2);
  if (cVar1 != '\0') {
    for (iVar2 = StdVector_size(unaff_retaddr); 0 < iVar2; iVar2 = iVar2 + -1) {
      param_1 = (int *)(**(code **)(*param_1 + 0x2cc))();
    }
    (**(code **)(*param_1 + 700))(param_2);
  }
  return;
}

