// addr: 0x01483510
// name: FUN_01483510
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_01483510(void * this, void * stream) */

bool __thiscall FUN_01483510(void *this,void *stream)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes two adjacent scalar fields from a scoped stream record. It opens
                       the record, reads fields at this+4 and this+8 with FUN_013c24d0, and closes
                       on success. */
  this_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 4));
    if (bVar2) {
      bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 8));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

