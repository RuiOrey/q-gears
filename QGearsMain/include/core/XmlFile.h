#ifndef XML_FILE_H
#define XML_FILE_H

#include <OgreColourValue.h>
#include <OgreMatrix4.h>
#include <OgreString.h>
#include <OgreVector2.h>
#include <OgreVector3.h>
#include <OgreVector4.h>
#include <OgreUTFString.h>

#include <tinyxml/tinyxml.h>



class XmlFile
{
public:
    XmlFile( const Ogre::String& file );
    virtual ~XmlFile();

    bool                      GetBool( TiXmlNode* node, const Ogre::String& tag, bool def = false ) const;
    int                       GetInt( TiXmlNode* node, const Ogre::String& tag, int def = 0 ) const;
    float                     GetFloat( TiXmlNode* node, const Ogre::String& tag, float def = 0.0f ) const;
    const Ogre::String        GetString( TiXmlNode* node, const Ogre::String& tag, const Ogre::String& def = "" ) const;
    const Ogre::UTFString     GetUTFString( TiXmlNode* node, const Ogre::String& tag, const Ogre::UTFString& def = "" ) const;
    const Ogre::Vector2       GetVector2( TiXmlNode* node, const Ogre::String& tag, const Ogre::Vector2& def = Ogre::Vector2::ZERO ) const;
    const Ogre::Vector3       GetVector3( TiXmlNode* node, const Ogre::String& tag, const Ogre::Vector3& def = Ogre::Vector3::ZERO  ) const;
    const Ogre::Vector4       GetVector4( TiXmlNode* node, const Ogre::String& tag, const Ogre::Vector4& def = Ogre::Vector4::ZERO  ) const;
    const Ogre::Matrix4       GetMatrix4( TiXmlNode* node, const Ogre::String& tag, const Ogre::Matrix4& def = Ogre::Matrix4::IDENTITY ) const;
    const Ogre::Quaternion    GetQuaternion( TiXmlNode* node, const Ogre::String& tag, const Ogre::Quaternion& def = Ogre::Quaternion::IDENTITY ) const;
    const Ogre::ColourValue   GetColourValue( TiXmlNode* node, const Ogre::String& tag, const Ogre::ColourValue& def = Ogre::ColourValue::ZERO ) const;

protected:
    bool m_NormalFile;

    TiXmlDocument m_File;
};



#endif // XML_FILE_H
