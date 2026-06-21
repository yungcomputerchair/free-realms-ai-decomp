// addr: 0x00d30240
// name: FUN_00d30240
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00d30240(void * this, int arg_, int callbackArg_) */

void __thiscall FUN_00d30240(void *this,int arg_,int callbackArg_)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  
                    /* Allocates a reference-counted byte array, fills it via FUN_007022d0, calls a
                       callback with a status code, then releases the array. No class evidence
                       visible. */
  puVar3 = Mem_Alloc(0x18);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = SoeUtil::Array<unsigned_char,0,1>::vftable;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = SoeUtil::RefCounted::vftable;
    puVar3[5] = 0;
    puVar3[5] = 1;
    puVar3[4] = SoeUtil::RefCountedImplicit::vftable;
    *puVar3 = SoeUtil::RefArray<unsigned_char,0,1>::vftable;
    puVar3[4] = SoeUtil::RefArray<unsigned_char,0,1>::vftable;
  }
  cVar2 = FUN_007022d0(arg_,puVar3);
  if (*(int *)((int)this + 0x114) != 0) {
    (**(code **)(**(int **)((int)this + 0x114) + 4))
              (this,arg_,callbackArg_,puVar3,(-(uint)(cVar2 != '\0') & 0xffffff34) + 0x194);
  }
  LOCK();
  iVar1 = puVar3[5] + -1;
  puVar3[5] = iVar1;
  UNLOCK();
  if (iVar1 == 0) {
    (**(code **)(puVar3[4] + 4))();
  }
  return;
}

