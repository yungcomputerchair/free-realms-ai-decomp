// addr: 0x00bc15a0
// name: ClientRequirementCheckNudgeFactory_insertRefPool
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ** ClientRequirementCheckNudgeFactory_insertRefPool(void * factory, uint
   * key, void ** pool) */

void ** __thiscall
ClientRequirementCheckNudgeFactory_insertRefPool(void *this,void *factory,uint *key,void **pool)

{
  uint *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Inserts a ref-counted ClientRequirementCheckNudge pool wrapper into the
                       requirement factory hash table. Evidence is caller 00bcd560 constructing
                       FUN_00bcba20's ClientRequirementCheckNudge RefObjectPool wrapper. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015ea571;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (uint *)(**(code **)(*(int *)this + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = *(uint *)factory;
    puVar1[1] = *key;
  }
  puVar1[2] = *(uint *)((int)this + (*puVar1 & 0x3ff) * 4 + 0xc);
  *(uint **)((int)this + (*puVar1 & 0x3ff) * 4 + 0xc) = puVar1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  ExceptionList = local_c;
  return (void **)(puVar1 + 1);
}

