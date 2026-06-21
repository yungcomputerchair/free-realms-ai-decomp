// addr: 0x00af18f0
// name: AppPhysics_MeshData_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AppPhysics_MeshData_ctor(void * this) */

void * __fastcall AppPhysics_MeshData_ctor(void *this)

{
                    /* Constructs AppPhysics::MeshData, first setting the ShapeData base vftable,
                       then the MeshData vftable, and clearing mesh fields and flags. Evidence is
                       AppPhysics::ShapeData::vftable followed by AppPhysics::MeshData::vftable. */
  *(undefined ***)this = AppPhysics::ShapeData::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined ***)this = AppPhysics::MeshData::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x41) = 0;
  *(undefined1 *)((int)this + 0x42) = 0;
  *(undefined1 *)((int)this + 0x43) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  return this;
}

