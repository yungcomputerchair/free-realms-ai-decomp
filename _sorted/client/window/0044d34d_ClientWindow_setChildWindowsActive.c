// addr: 0x0044d34d
// name: ClientWindow_setChildWindowsActive
// subsystem: common/client/window
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ClientWindow_setChildWindowsActive(void * this, bool active_) */

int __thiscall ClientWindow_setChildWindowsActive(void *this,bool active_)

{
  int *piVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  HWND hWnd;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [8];
  undefined1 local_10 [12];
  
                    /* Iterates the child window pointer vector and calls each child's vtable slot
                       0xbc with active/inactive state; when activating it also obtains the child's
                       HWND through vtable slot 0x3c and calls UpdateWindow. Skips work when the
                       parent inactive/disabled flag at field 0xf is set. */
  if (*(char *)((int)this + 0x3c) == '\0') {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    (**(code **)(*(int *)this + 0x7c))(local_2c);
    if (active_) {
      FUN_0044a51f(local_1c);
      uVar4 = FUN_0044a546(local_10);
      cVar2 = FUN_00446f1e(uVar4);
      while (cVar2 == '\0') {
        puVar5 = (undefined4 *)FUN_00447c85();
        piVar1 = (int *)*puVar5;
        (**(code **)(*piVar1 + 0xbc))(1);
        hWnd = (HWND)(**(code **)(*piVar1 + 0x3c))(0,0,0);
        UpdateWindow(hWnd);
        FUN_00444161();
        uVar4 = FUN_0044a546(local_10);
        cVar2 = FUN_00446f1e(uVar4);
      }
    }
    else {
      FUN_00446a69(local_28,local_2c);
      while( true ) {
        FUN_00446a69(local_24,local_2c);
        cVar2 = FUN_00444047(local_18);
        if (cVar2 != '\0') break;
        puVar5 = (undefined4 *)FUN_00444026();
        (**(code **)(*(int *)*puVar5 + 0xbc))(0);
        FUN_0044413d();
      }
    }
    uVar4 = FUN_0044a60d();
    uVar3 = CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  else {
    uVar3 = in_EAX & 0xffffff00;
  }
  return uVar3;
}

