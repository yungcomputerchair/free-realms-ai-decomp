// addr: 0x010c1b60
// name: ObjectGroup_allChildrenReady
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ObjectGroup_allChildrenReady(int group_) */

int __fastcall ObjectGroup_allChildrenReady(int group_)

{
  int *piVar1;
  uint in_EAX;
  undefined4 *puVar2;
  
                    /* Walks seven linked lists at fixed offsets and returns false if any child
                       object reports both readiness/status virtual checks as false; otherwise
                       returns true. */
  for (puVar2 = *(undefined4 **)(group_ + 8); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    piVar1 = (int *)*puVar2;
    in_EAX = (**(code **)(*piVar1 + 0xc))();
    if ((char)in_EAX == '\0') {
      in_EAX = (**(code **)(*piVar1 + 0x14))();
      if ((char)in_EAX == '\0') goto LAB_010c1b8d;
    }
  }
  for (puVar2 = *(undefined4 **)(group_ + 0xbc); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    piVar1 = (int *)*puVar2;
    in_EAX = (**(code **)(*piVar1 + 0xc))();
    if ((char)in_EAX == '\0') {
      in_EAX = (**(code **)(*piVar1 + 0x14))();
      if ((char)in_EAX == '\0') goto LAB_010c1b8d;
    }
  }
  for (puVar2 = *(undefined4 **)(group_ + 0x170); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    piVar1 = (int *)*puVar2;
    in_EAX = (**(code **)(*piVar1 + 0xc))();
    if ((char)in_EAX == '\0') {
      in_EAX = (**(code **)(*piVar1 + 0x14))();
      if ((char)in_EAX == '\0') goto LAB_010c1b8d;
    }
  }
  for (puVar2 = *(undefined4 **)(group_ + 0x224); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    piVar1 = (int *)*puVar2;
    in_EAX = (**(code **)(*piVar1 + 0xc))();
    if ((char)in_EAX == '\0') {
      in_EAX = (**(code **)(*piVar1 + 0x14))();
      if ((char)in_EAX == '\0') goto LAB_010c1b8d;
    }
  }
  for (puVar2 = *(undefined4 **)(group_ + 0x2d8); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    piVar1 = (int *)*puVar2;
    in_EAX = (**(code **)(*piVar1 + 0xc))();
    if ((char)in_EAX == '\0') {
      in_EAX = (**(code **)(*piVar1 + 0x14))();
      if ((char)in_EAX == '\0') goto LAB_010c1b8d;
    }
  }
  for (puVar2 = *(undefined4 **)(group_ + 0x38c); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    piVar1 = (int *)*puVar2;
    in_EAX = (**(code **)(*piVar1 + 0xc))();
    if ((char)in_EAX == '\0') {
      in_EAX = (**(code **)(*piVar1 + 0x14))();
      if ((char)in_EAX == '\0') goto LAB_010c1b8d;
    }
  }
  puVar2 = *(undefined4 **)(group_ + 0x440);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
    piVar1 = (int *)*puVar2;
    in_EAX = (**(code **)(*piVar1 + 0xc))();
    if ((char)in_EAX == '\0') {
      in_EAX = (**(code **)(*piVar1 + 0x14))();
      if ((char)in_EAX == '\0') {
LAB_010c1b8d:
        return in_EAX & 0xffffff00;
      }
    }
    puVar2 = (undefined4 *)puVar2[1];
  } while( true );
}

