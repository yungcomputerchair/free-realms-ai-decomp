// addr: 0x00d0b740
// name: ImageCapture_IEncoderPtr_assignDeleting
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ImageCapture_IEncoderPtr_assignDeleting(void ** slot, void * encoder) */

void __thiscall ImageCapture_IEncoderPtr_assignDeleting(void *this,void **slot,void *encoder)

{
  undefined4 unaff_retaddr;
  
                    /* Assigns an ImageCapture encoder pointer, deleting the old vtable object if
                       present. Evidence: VideoCapture_JPG_openEncoder calls this immediately after
                       constructing PNGEncoder/JPGEncoder alternatives. */
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)this)(1);
    *(undefined4 *)this = 0;
    *(undefined4 *)this = unaff_retaddr;
    return;
  }
  *(void ***)this = slot;
  return;
}

