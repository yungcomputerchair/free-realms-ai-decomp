// addr: 0x014ed690
// name: FUN_014ed690
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AccountCommand_BulkIntroduceAccount_deserializeBasic(void * this, void *
   stream) */

bool __thiscall AccountCommand_BulkIntroduceAccount_deserializeBasic(void *this,void *stream)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int unaff_ESI;
  
                    /* Deserializes an account command header and account string/list field, with a
                       version-gated integer. */
  this_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (((cVar1 != '\0') && (cVar1 = FUN_01407cf0(this_00), cVar1 != '\0')) &&
     (cVar1 = FUN_012faf70(this_00,(int)this + 8), cVar1 != '\0')) {
    if ((1 < unaff_ESI) &&
       (bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0xc)), !bVar2)) {
      return false;
    }
    uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
    return (bool)uVar3;
  }
  return false;
}

