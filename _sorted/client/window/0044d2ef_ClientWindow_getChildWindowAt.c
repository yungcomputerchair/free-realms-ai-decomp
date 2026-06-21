// addr: 0x0044d2ef
// name: ClientWindow_getChildWindowAt
// subsystem: common/client/window
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall ClientWindow_getChildWindowAt(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  undefined4 local_8;
  
                    /* Returns the child/window object pointer at an index when the window is active
                       and has child storage; otherwise returns null. It obtains a vector through
                       vtable slot 0x7c, bounds-checks the index, reads a 4-byte pointer element,
                       then frees the temporary vector storage. */
  if (((char)param_1[0xf] == '\0') && (param_1[10] != 0)) {
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    (**(code **)(*param_1 + 0x7c))(local_14);
    if ((local_10 == 0) || ((uint)(local_c - local_10 >> 2) <= param_2)) {
      uVar1 = 0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00443d1a(param_2);
      uVar1 = *puVar2;
    }
    FUN_0044a60d();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

