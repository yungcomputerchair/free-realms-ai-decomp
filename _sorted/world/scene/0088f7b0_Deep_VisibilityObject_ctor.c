// addr: 0x0088f7b0
// name: Deep_VisibilityObject_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deep_VisibilityObject_ctor(void * this, void * owner, void * parent,
   void * umbraObject) */

void * __thiscall Deep_VisibilityObject_ctor(void *this,void *owner,void *parent,void *umbraObject)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Deep::VisibilityObject, acquiring or using an Umbra object
                       handle, refcounting the owner/parent, initializing default
                       transform/visibility state, and submitting default Umbra updates. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01579098;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  Deep_VisibilityObjectDPVSInterface_ctor(this);
  local_4 = 0;
  *(undefined ***)this = Deep::VisibilityObject::vftable;
  if (umbraObject == (void *)0x0) {
    umbraObject = (void *)FUN_00dbc220(*(undefined4 *)((int)owner + 8),uVar1);
  }
  *(void **)((int)this + 8) = umbraObject;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  LOCK();
  *(int *)((int)owner + 4) = *(int *)((int)owner + 4) + 1;
  UNLOCK();
  if ((parent != (void *)0x0) && (*(int *)((int)parent + 8) != 0)) {
    FUN_00dbf5d0(*(int *)((int)parent + 8));
    LOCK();
    *(int *)((int)parent + 4) = *(int *)((int)parent + 4) + 1;
    UNLOCK();
  }
  FUN_00dc1d20(0,0);
  FUN_00dbf300(DAT_01be46d8);
  FUN_00dc0750(&DAT_01bc2660);
  ExceptionList = local_c;
  return this;
}

