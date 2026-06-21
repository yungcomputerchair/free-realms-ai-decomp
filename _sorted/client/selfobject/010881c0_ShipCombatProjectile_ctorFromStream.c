// addr: 0x010881c0
// name: ShipCombatProjectile_ctorFromStream
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * ShipCombatProjectile_ctorFromStream(void * this, void * data, int
   length_) */

void * __thiscall ShipCombatProjectile_ctorFromStream(void *this,void *data,int length_)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_24;
  int local_20;
  void *local_1c;
  int local_18;
  undefined1 local_14;
  undefined1 local_13;
  
                    /* Constructs a ShipCombatProjectile, initializes default vector data, sets
                       ShipCombatProjectile::vftable, then deserializes fields from the provided
                       stream buffer. The vtable symbol gives the class name. */
  *(undefined ***)this = ShipCombatProjectile::vftable;
  *(undefined4 *)((int)this + 0x10) = DAT_01cb7f94;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar3 = uRam01cb53dc;
  uVar2 = uRam01cb53d8;
  uVar1 = uRam01cb53d4;
  *(undefined4 *)((int)this + 0x20) = _DAT_01cb53d0;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  puVar5 = &DAT_01bc2660;
  puVar6 = (undefined4 *)((int)this + 0x30);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_24 = data;
  local_20 = length_;
  local_1c = data;
  local_18 = (int)data + length_;
  local_14 = 0;
  local_13 = 0;
  ShipCombatProjectile_deserializeFields(this,&local_24);
  return this;
}

