// addr: 0x010ac5b0
// name: FUN_010ac5b0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_010ac5b0(void * owner, void * arg) */

void __thiscall FUN_010ac5b0(void *this,void *owner,void *arg)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Releases a reference-counted object at owner+0x84, allocates a replacement
                       via FUN_010a5220, and stores it. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0164719b;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  piVar1 = *(int **)((int)this + 0x84);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  pvVar4 = Mem_Alloc(0x88);
  uStack_4 = 0;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_010a5220(owner);
  }
  *(undefined4 *)((int)this + 0x84) = uVar5;
  ExceptionList = local_c;
  return;
}

