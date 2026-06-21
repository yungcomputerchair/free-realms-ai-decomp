// addr: 0x009e5370
// name: ClientEffect_deserialize
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientEffect_deserialize(void * this, void * reader) */

void __thiscall ClientEffect_deserialize(void *this,void *reader)

{
  undefined4 *puVar1;
  
                    /* Deserializes a client effect-like record containing several 64-bit ids,
                       integer fields, a Vec4, a float with NaN check, and an EffectTagList. The
                       named EffectTagList_Deserialize callee provides effect context. */
  puVar1 = *(undefined4 **)((int)reader + 8);
  if (*(undefined4 **)((int)reader + 0xc) < puVar1 + 2) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)this = *puVar1;
    *(undefined4 *)((int)this + 4) = puVar1[1];
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 8;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 8) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  puVar1 = *(undefined4 **)((int)reader + 8);
  if (*(undefined4 **)((int)reader + 0xc) < puVar1 + 2) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x10) = *puVar1;
    *(undefined4 *)((int)this + 0x14) = puVar1[1];
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 8;
  }
  puVar1 = *(undefined4 **)((int)reader + 8);
  if (*(undefined4 **)((int)reader + 0xc) < puVar1 + 2) {
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x18) = *puVar1;
    *(undefined4 *)((int)this + 0x1c) = puVar1[1];
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 8;
  }
  puVar1 = *(undefined4 **)((int)reader + 8);
  if (*(undefined4 **)((int)reader + 0xc) < puVar1 + 2) {
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x20) = *puVar1;
    *(undefined4 *)((int)this + 0x24) = puVar1[1];
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 8;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x28) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x2c) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  Stream_ReadVec4(reader,(float *)((int)this + 0x30));
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    EffectTagList_Deserialize(reader,(int)this + 0x44);
    return;
  }
  *(undefined4 *)((int)this + 0x40) = **(undefined4 **)((int)reader + 8);
  *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  if (NAN(*(float *)((int)this + 0x40))) {
    *(undefined1 *)((int)reader + 0x11) = 1;
  }
  EffectTagList_Deserialize(reader,(int)this + 0x44);
  return;
}

