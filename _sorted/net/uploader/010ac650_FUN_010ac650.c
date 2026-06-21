// addr: 0x010ac650
// name: FUN_010ac650
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_010ac650(void * owner, void * skeletonDefinition) */

bool __thiscall FUN_010ac650(void *this,void *owner,void *skeletonDefinition)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Sets or clears a skeleton-definition resource; rejects definitions with zero
                       bones by writing the error string and otherwise constructs a
                       reference-counted skeleton object. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016471cb;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  if ((owner != (void *)0x0) && (*(int *)((int)owner + 0xc) == 0)) {
    *(char **)((int)this + 0x1ac) = "SkeletonDefinition set with 0 bones";
    return false;
  }
  piVar1 = *(int **)((int)this + 0x1a0);
  ExceptionList = &local_c;
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    *(undefined4 *)((int)this + 0x1a0) = 0;
  }
  *(undefined1 *)((int)this + 0x1b0) = 0;
  if (owner != (void *)0x0) {
    pvVar4 = Mem_Alloc(0xb0);
    uStack_4 = 0;
    if (pvVar4 != (void *)0x0) {
      uVar5 = FUN_010b4050(owner);
      *(undefined4 *)((int)this + 0x1a0) = uVar5;
      ExceptionList = local_c;
      return true;
    }
    *(undefined4 *)((int)this + 0x1a0) = 0;
    ExceptionList = local_c;
    return true;
  }
  *(undefined4 *)((int)this + 0x1a0) = 0;
  ExceptionList = local_c;
  return true;
}

