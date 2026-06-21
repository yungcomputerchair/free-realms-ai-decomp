// addr: 0x010d48f0
// name: GuiDsTableViewBinding_attachTableView
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiDsTableViewBinding_attachTableView(void * this, void * rootControl) */

void __thiscall GuiDsTableViewBinding_attachTableView(void *this,void *rootControl)

{
  int iVar1;
  uint uVar2;
  
                    /* Finds a child/control named 'GuiDsTableView', stores it, initializes it, and
                       if pending column state exists, ensures per-column entries are created and
                       marked active. */
  iVar1 = FUN_00848610(rootControl,"GuiDsTableView");
  if (iVar1 != 0) {
    *(int *)((int)this + 0x6c) = iVar1;
    FUN_00835580(iVar1);
    if (*(char *)((int)this + 0x71) != '\0') {
      uVar2 = 0;
      iVar1 = (*(code *)**(undefined4 **)(*(int *)((int)this + 0x6c) + 0x30))();
      if (0 < iVar1) {
        do {
          for (iVar1 = *(int *)((int)this + (uVar2 & 3) * 4 + 0x30); iVar1 != 0;
              iVar1 = *(int *)(iVar1 + 0x1c)) {
            if (*(uint *)(iVar1 + 0x20) == uVar2) goto LAB_010d497d;
          }
          iVar1 = FUN_010d44f0(uVar2,1);
          if ((iVar1 != 0) && (*(char *)(iVar1 + 4) != '\x01')) {
            *(undefined1 *)(iVar1 + 4) = 1;
            *(undefined1 *)((int)this + 0x70) = 1;
          }
LAB_010d497d:
          uVar2 = uVar2 + 1;
          iVar1 = (*(code *)**(undefined4 **)(*(int *)((int)this + 0x6c) + 0x30))();
        } while ((int)uVar2 < iVar1);
      }
      *(undefined1 *)((int)this + 0x71) = 0;
    }
    *(undefined1 *)((int)this + 0x70) = 1;
  }
  return;
}

