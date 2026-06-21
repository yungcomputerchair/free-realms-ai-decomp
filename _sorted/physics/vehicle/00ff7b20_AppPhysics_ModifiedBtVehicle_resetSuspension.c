// addr: 0x00ff7b20
// name: AppPhysics_ModifiedBtVehicle_resetSuspension
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void AppPhysics_ModifiedBtVehicle_resetSuspension(void * this) */

void __fastcall AppPhysics_ModifiedBtVehicle_resetSuspension(void *this)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  int local_24;
  
                    /* Resets each wheel's suspension state to its rest length, clears relative
                       velocity, sets the clipped inverse contact dot to 1, and updates wheel
                       transforms. */
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x11c)) {
    local_24 = 0;
    do {
      pfVar3 = (float *)(*(int *)((int)this + 0x124) + local_24);
      fVar4 = (float10)FUN_00ff1300();
      pfVar3[8] = (float)fVar4;
      pfVar3[0x5d] = 0.0;
      fVar6 = DAT_017ea5a4 - pfVar3[0x11];
      fVar5 = DAT_017ea5a4 - pfVar3[0x12];
      *pfVar3 = DAT_017ea5a4 - pfVar3[0x10];
      fVar1 = _DAT_0175b420;
      pfVar3[1] = fVar6;
      pfVar3[2] = fVar5;
      pfVar3[3] = 0.0;
      pfVar3[0x5c] = fVar1;
      FUN_00ff6400(pfVar3,0);
      FUN_00ff71e0(iVar2,0);
      local_24 = local_24 + 400;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x11c));
  }
  return;
}

