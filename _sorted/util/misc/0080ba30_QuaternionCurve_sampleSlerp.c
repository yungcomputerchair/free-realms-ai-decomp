// addr: 0x0080ba30
// name: QuaternionCurve_sampleSlerp
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 QuaternionCurve_sampleSlerp(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_40 [60];
  
                    /* Samples a quaternion curve into a temporary key buffer and writes a
                       spherical-linear-interpolated quaternion to the output. */
  uVar1 = param_1;
  SkyDefinition_sampleVector4Curve(local_40,param_2);
  Quaternion_slerp(uVar1);
  return param_1;
}

