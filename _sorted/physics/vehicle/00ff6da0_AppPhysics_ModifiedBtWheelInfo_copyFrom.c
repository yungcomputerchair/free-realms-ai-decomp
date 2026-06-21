// addr: 0x00ff6da0
// name: AppPhysics_ModifiedBtWheelInfo_copyFrom
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AppPhysics_ModifiedBtWheelInfo_copyFrom(void * this, void * other) */

void __thiscall AppPhysics_ModifiedBtWheelInfo_copyFrom(void *this,void *other)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = other;
  puVar3 = this;
                    /* Copies the full ModifiedBtWheelInfo record, including scalar flags at byte
                       offsets 0x134-0x136 and trailing vector fields. Used by vehicle wheel array
                       construction and assignment paths. */
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)other + 0x70);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)other + 0x74);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)other + 0x78);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)other + 0x7c);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)other + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)other + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)((int)other + 0x88);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)((int)other + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)other + 0x90);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)((int)other + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)((int)other + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)((int)other + 0x9c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)((int)other + 0xa0);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)((int)other + 0xa4);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)((int)other + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)((int)other + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)other + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)((int)other + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)((int)other + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)((int)other + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)((int)other + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)((int)other + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)((int)other + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)((int)other + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)((int)other + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)((int)other + 0xd4);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)((int)other + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)((int)other + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)((int)other + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)((int)other + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)((int)other + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)((int)other + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)((int)other + 0xf0);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)((int)other + 0xf4);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)((int)other + 0xf8);
  *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)((int)other + 0xfc);
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)((int)other + 0x100);
  *(undefined4 *)((int)this + 0x104) = *(undefined4 *)((int)other + 0x104);
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)((int)other + 0x108);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)((int)other + 0x10c);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)((int)other + 0x110);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)((int)other + 0x114);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)((int)other + 0x118);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)((int)other + 0x11c);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)((int)other + 0x120);
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)((int)other + 0x124);
  *(undefined4 *)((int)this + 0x128) = *(undefined4 *)((int)other + 0x128);
  *(undefined4 *)((int)this + 300) = *(undefined4 *)((int)other + 300);
  *(undefined4 *)((int)this + 0x130) = *(undefined4 *)((int)other + 0x130);
  *(undefined1 *)((int)this + 0x134) = *(undefined1 *)((int)other + 0x134);
  *(undefined1 *)((int)this + 0x135) = *(undefined1 *)((int)other + 0x135);
  *(undefined1 *)((int)this + 0x136) = *(undefined1 *)((int)other + 0x136);
  *(undefined4 *)((int)this + 0x138) = *(undefined4 *)((int)other + 0x138);
  *(undefined4 *)((int)this + 0x13c) = *(undefined4 *)((int)other + 0x13c);
  puVar2 = (undefined4 *)((int)other + 0x140);
  puVar3 = (undefined4 *)((int)this + 0x140);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x170) = *(undefined4 *)((int)other + 0x170);
  *(undefined4 *)((int)this + 0x174) = *(undefined4 *)((int)other + 0x174);
  *(undefined4 *)((int)this + 0x178) = *(undefined4 *)((int)other + 0x178);
  *(undefined4 *)((int)this + 0x17c) = *(undefined4 *)((int)other + 0x17c);
  *(undefined4 *)((int)this + 0x180) = *(undefined4 *)((int)other + 0x180);
  return;
}

