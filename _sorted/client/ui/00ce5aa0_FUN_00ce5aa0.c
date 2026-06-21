// addr: 0x00ce5aa0
// name: FUN_00ce5aa0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00ce5aa0(void *param_1)

{
  undefined4 *node;
  
                    /* Releases/removes the child object stored at this+0x30 by first detaching it
                       from its parent/container, then calls its deleting destructor and marks
                       this+0x40. Exact UI class is unknown. */
  node = *(undefined4 **)((int)param_1 + 0x30);
  if (node != (undefined4 *)0x0) {
    GuiTreeDataSource_removeChildAndNotify(param_1,node);
    (**(code **)*node)(1);
  }
  *(undefined1 *)((int)param_1 + 0x40) = 1;
  return;
}

