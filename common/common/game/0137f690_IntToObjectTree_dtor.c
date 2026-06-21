// addr: 0x0137f690
// name: IntToObjectTree_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IntToObjectTree_dtor(int this_) */

void __fastcall IntToObjectTree_dtor(int this_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys the rb-tree member at this+0xc using StdRbTree_destroyAndFree. */
  puStack_8 = &LAB_01682356;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  StdRbTree_destroyAndFree((void *)(this_ + 0x10));
  ExceptionList = puStack_8;
  return;
}

