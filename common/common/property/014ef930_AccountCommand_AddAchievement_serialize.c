// addr: 0x014ef930
// name: AccountCommand_AddAchievement_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_AddAchievement_serialize(void * this, void * serializer)
    */

void __thiscall AccountCommand_AddAchievement_serialize(void *this,void *serializer)

{
  int *piVar1;
  bool bVar2;
  void *serializer_00;
  
                    /* Serializes AddAchievement by writing a null-present marker and, when present,
                       delegating serialization of the achievement payload pointer. */
  serializer_00 = serializer;
  (**(code **)(*(int *)this + 8))();
  AccountCommand_serialize(this,serializer,(int)serializer_00);
  piVar1 = *(int **)((int)this + 8);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(serializer,1);
    (**(code **)(*(int *)this + 0xc))(serializer);
    return;
  }
  bVar2 = Serializer_appendInteger(serializer,0);
  if (bVar2) {
    (**(code **)(*piVar1 + 0x28))(serializer);
  }
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

