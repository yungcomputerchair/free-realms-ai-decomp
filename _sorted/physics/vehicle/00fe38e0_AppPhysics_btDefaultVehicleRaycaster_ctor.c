// addr: 0x00fe38e0
// name: AppPhysics_btDefaultVehicleRaycaster_ctor
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AppPhysics_btDefaultVehicleRaycaster_ctor(void * this, void *
   dynamicsWorld, void * owner, void * filter) */

void * __thiscall
AppPhysics_btDefaultVehicleRaycaster_ctor(void *this,void *dynamicsWorld,void *owner,void *filter)

{
                    /* Constructs AppPhysics::btDefaultVehicleRaycaster by installing the base
                       btVehicleRaycaster vtable, then the AppPhysics derived vtable, and storing
                       three constructor arguments. */
  *(undefined ***)this = btVehicleRaycaster::vftable;
  *(void **)((int)this + 4) = dynamicsWorld;
  *(undefined ***)this = AppPhysics::btDefaultVehicleRaycaster::vftable;
  *(void **)((int)this + 8) = owner;
  *(void **)((int)this + 0xc) = filter;
  return this;
}

