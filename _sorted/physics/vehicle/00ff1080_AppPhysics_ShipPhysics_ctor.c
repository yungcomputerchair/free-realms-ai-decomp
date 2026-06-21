// addr: 0x00ff1080
// name: AppPhysics_ShipPhysics_ctor
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * AppPhysics_ShipPhysics_ctor(void * this, void * arg2, void * shipData,
   void * transform, void * owner, void * extra) */

void * __thiscall
AppPhysics_ShipPhysics_ctor
          (void *this,void *arg2,void *shipData,void *transform,void *owner,void *extra)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = _DAT_0175b420;
                    /* Constructs AppPhysics::ShipPhysics, initializes movement/state fields and
                       fixed arrays, then creates its underlying physics bodies and registers the
                       instance in a global/list container. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01630f5e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = AppPhysics::ShipPhysics::vftable;
  *(void **)((int)this + 0x10) = owner;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x2d) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x38) = uVar1;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x48) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = uVar1;
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined1 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  FUN_00ff0e80(arg2);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2dc) = 0;
  *(undefined4 *)((int)this + 0x2e0) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0;
  *(undefined4 *)((int)this + 0x2e8) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(void **)((int)this + 0x2fc) = extra;
  *(undefined4 *)((int)this + 0x300) = 0;
  *(undefined4 *)((int)this + 0x304) = 0;
  AppPhysics_ShipPhysics_createBodiesAndConstraint(this,shipData,transform);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)((int)this + 0x128);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x20c);
  FUN_00fd9ea0(this);
  ExceptionList = local_c;
  return this;
}

