// addr: 0x01315ca0
// name: CommandObjectVector_pushBack
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectVector_pushBack(void * vector, void * value) */

void __thiscall CommandObjectVector_pushBack(void *this,void *vector,void *value)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 local_8 [8];
  
                    /* Pushes a pointer/value into a vector, growing through a helper when at
                       capacity. Called by CommandObjectVector_pushBack and
                       MultiActionState_getCommandObjectList. */
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)((int)this + 8) - uVar1) >> 2) <
      (uint)((int)(*(int *)((int)this + 0xc) - uVar1) >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    *puVar2 = *(undefined4 *)vector;
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  uVar3 = *(uint *)((int)this + 8);
  if (uVar3 < uVar1) {
    FUN_00d83c2d();
  }
  FUN_01315a20(local_8,this,uVar3,vector);
  return;
}

