// addr: 0x010880c0
// name: ShipCombatProjectile_deserializeFields
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ShipCombatProjectile_deserializeFields(void * this, void * reader) */

void __thiscall ShipCombatProjectile_deserializeFields(void *this,void *reader)

{
                    /* Deserializes ShipCombatProjectile field data: several dwords/floats followed
                       by five Vec4 values. Class name is supplied by the constructor that
                       immediately calls this parser. */
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x10) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x14) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x18) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x1c) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
    if (NAN(*(float *)((int)this + 0x1c))) {
      *(undefined1 *)((int)reader + 0x11) = 1;
    }
  }
  Stream_ReadVec4(reader,(float *)((int)this + 0x20));
  Stream_ReadVec4(reader,(float *)((int)this + 0x30));
  Stream_ReadVec4(reader,(float *)((int)this + 0x40));
  Stream_ReadVec4(reader,(float *)((int)this + 0x50));
  Stream_ReadVec4(reader,(float *)((int)this + 0x60));
  return;
}

