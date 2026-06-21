// addr: 0x012bbae0
// name: ActionDB_findOrCreateActionSlot
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * ActionDB_findOrCreateActionSlot(void * tree, int * actionId) */

int * __thiscall ActionDB_findOrCreateActionSlot(void *this,void *tree,int *actionId)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_EDI;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
                    /* Looks up an action id in the ActionDB red-black tree and inserts a default
                       node when missing, returning the node payload slot. The red-black sentinel
                       checks and callers in ActionDB registration identify the container. */
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *(int *)tree) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 == *(undefined4 **)((int)this + 4)) || (*(int *)tree < (int)puVar3[3])) {
    local_10 = *(undefined4 *)tree;
    local_c = 0;
    puVar3 = ActionDB_insertOrFindActionSlot(this,local_8,this,puVar3,&local_10,unaff_EDI);
    this = (void *)*puVar3;
    puVar3 = (undefined4 *)puVar3[1];
  }
  if (this == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (puVar3 == *(undefined4 **)((int)this + 4)) {
    FUN_00d83c2d();
  }
  return puVar3 + 4;
}

