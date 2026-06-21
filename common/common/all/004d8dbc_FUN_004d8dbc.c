// addr: 0x004d8dbc
// name: FUN_004d8dbc
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_004d8dbc(void * this, void * outStatus) */

bool __thiscall FUN_004d8dbc(void *this,void *outStatus)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
                    /* Calls a virtual status/fill routine and, for one mode, updates an output
                       64-bit position/size pair using a virtual offset plus a stored bias. */
  cVar1 = (**(code **)(**(int **)((int)this + 8) + 0x50))(outStatus);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    if (*(int *)((int)this + 0x10) == 2) {
      lVar4 = (**(code **)(**(int **)((int)this + 8) + 0x44))();
      lVar4 = lVar4 + (ulonglong)*(uint *)((int)this + 0x14);
      iVar3 = (int)((ulonglong)lVar4 >> 0x20);
      if ((*(int *)((int)outStatus + 4) <= iVar3) &&
         ((*(int *)((int)outStatus + 4) < iVar3 || (*(uint *)outStatus < (uint)lVar4)))) {
        *(longlong *)outStatus = lVar4;
        lVar4 = __allshr(9,iVar3 + (uint)(0xfffffe00 < (uint)lVar4));
        *(longlong *)((int)outStatus + 8) = lVar4;
      }
    }
    bVar2 = true;
  }
  return bVar2;
}

