// addr: 0x01152d60
// name: btTriangleMeshShape_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * btTriangleMeshShape_ctor(void * this, void * meshInterface) */

void * __thiscall btTriangleMeshShape_ctor(void *this,void *meshInterface)

{
  char cVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Bullet btTriangleMeshShape around a mesh interface and
                       initializes bounds through the mesh interface or a fallback helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016505e8;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  btConcaveShape_ctor(this);
  *(undefined ***)this = btTriangleMeshShape::vftable;
  *(void **)((int)this + 0x30) = meshInterface;
  *(undefined4 *)((int)this + 4) = 0x15;
  local_4 = 0;
  cVar1 = (**(code **)(*(int *)meshInterface + 0x24))(uVar2);
  if (cVar1 == '\0') {
    recalc_shape_local_aabb_from_support(this);
  }
  else {
    (**(code **)(*(int *)meshInterface + 0x2c))((int)this + 0x10,(int)this + 0x20);
  }
  ExceptionList = local_c;
  return this;
}

