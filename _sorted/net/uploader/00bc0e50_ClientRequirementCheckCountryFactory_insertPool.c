// addr: 0x00bc0e50
// name: ClientRequirementCheckCountryFactory_insertPool
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ** ClientRequirementCheckCountryFactory_insertPool(void * factory, uint *
   key, void ** pool) */

void ** __thiscall
ClientRequirementCheckCountryFactory_insertPool(void *this,void *factory,uint *key,void **pool)

{
  uint *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Inserts a newly allocated ClientRequirementCheckCountry pool wrapper into the
                       requirement factory hash table and returns the stored pool pointer. Evidence
                       is caller 00bcacb0, which allocates FUN_00bc5040's
                       ClientRequirementCheckCountry pool wrapper then calls this hash insert. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015ea301;
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

