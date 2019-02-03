#pragma once

#ifndef CYLLINDER_H
#define CYLLINDER_H

class Cylinder :
    public Shape
{
protected:
    Vector3f m_vAxis;     // A
    Vector3f m_vLocation; // B
    float m_fLength;
    float m_fRadius;
    Quaternionf m_qRotation;
    RTSlab m_Slab;

public:
    Cylinder(const Vector3f& a_vLocation, const Vector3f& a_vAxis, float a_fRadius, Material* a_pMaterial);
    virtual ~Cylinder();

    virtual bool Hit(const Ray& a_Ray, float a_fTMin, float a_fTMax, Intersection& a_Hit) const;
};

#endif //CYLLINDER_H