// addr: 0x013c2790
// name: Serializer_appendTimeValue
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Serializer_appendTimeValue(void * serializer, uint * timeValue) */

void __thiscall Serializer_appendTimeValue(void *this,void *serializer,uint *timeValue)

{
  bool bVar1;
  
                    /* Appends a two-word time value to a serializer, forcing/validating append
                       state 2 and logging Wrong state in appendTimeValue on mismatch. */
  if (*(int *)((int)this + 0x10) == 0) {
    *(undefined4 *)((int)this + 0x10) = 2;
  }
  if (*(int *)((int)this + 0x10) != 2) {
    FUN_012f5dc0("Wrong state in appendTimeValue %d",*(int *)((int)this + 0x10));
  }
  bVar1 = Serializer_appendInteger(this,*(uint *)serializer);
  if (!bVar1) {
    return;
  }
  Serializer_appendInteger(this,*(uint *)((int)serializer + 4));
  return;
}

